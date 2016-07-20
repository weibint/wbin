#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main()
{
	//create socket
	int serv_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	//bind socket and IP, port
	struct sockaddr_in serv_addr;
	memset(&serv_addr, 0, sizeof(serv_addr));//set every bit with 0
	serv_addr.sin_family =AF_INET;//using IPv4 address
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");//detail IP address
	serv_addr.sin_port = htons(1234);//port
	bind(serv_sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

	//in listen status, waiting for the request from client
	listen(serv_sock, 5);

	//accept request of client
	struct sockaddr_in clnt_addr;
	socklen_t clnt_addr_size = sizeof(clnt_addr);
	int clnt_sock = accept(serv_sock, (struct sockaddr*)&clnt_addr, &clnt_addr_size);

	//send data to client
	char str[] = "Hello World!";
	write(clnt_sock, str, sizeof(str));

	//close socket
	close(clnt_sock);
	close(serv_sock);

	return 0;
}
