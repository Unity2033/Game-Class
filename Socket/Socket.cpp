#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

#pragma comment(lib, "ws2_32.lib")

int main()
{
    WSADATA wsaData;
    SOCKET hSocket;
    SOCKADDR_IN servAddr;

    // 1. 원속 초기화
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        printf("Failed WSAStartup() \n");
    }

    // 2. socket 생성
    hSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (hSocket == INVALID_SOCKET)
    {
        printf("Failed socket() \n");
    }

    // 3. 서버 연결
    //    3-1. 연결할 서버 주소 설정
    memset(&servAddr, 0, sizeof(servAddr));
    servAddr.sin_family = AF_INET;

    inet_pton(AF_INET, "127.0.0.1", &servAddr.sin_addr);
    servAddr.sin_port = htons(30002);

    //     3-2. 서버에 연결 시도
    if (connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR)
    {
        printf("Failed connect() \n");
    }

    // 4. 서버로 부터 통신 대기
    int recvSize;
    char recvData[255];
    recvSize = recv(hSocket, recvData, sizeof(recvData), 0);

    if (recvSize == -1)
    {
        printf("recv() Error \n");
    }

    printf("recv %d message : %s \n", recvSize, recvData);

    // 5. 소켓 종료 -> 원속 종료
    closesocket(hSocket);
    WSACleanup();

    // socket 함수
    // WINSOCK_API_LINKAGE SOCKET WSAAPI socket
    // 특정 전송 서비스 제공에 바인됭된 소켓을 생성하는 함수입니다.

    // 네트워크 프로그래밍을 하기 위해 기본적으로 소켓이 있어야 
    // 연결 또는 대기가 가능합니다.

    // 이 소켓으로 send, recv 모든 것이 처리되는 기본입니다.


    // AF_INET : 인터넷 프로토콜 버전 4(IPv4) 주소

    // Socket Type
    // SOCK_STREAM : OOB 데이터 전송 매커니즘을 사용하여 순차적이고 
    // 신뢰할 수 있는 양방향 연결 기반 바이트 스트림을 제공하는 소켓 유형입니다.
    // 이 소켓 유형은 인터넷 주소 패밀리 (AF_INET 또는 AF_INET6)에 대해 TCP를 사용합니다.

    system("pause");
    return 0;
}

