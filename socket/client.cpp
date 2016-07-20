#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main()
{
	//create socket
	int sock = socket(AF_INET, SOCK_STREAM, 0);

	//send the request message to server(with the detail IP and port)
	struct sockaddr_in serv_addr;
	memset(&serv_addr, 0, sizeof(serv_addr));//set every bit with 0
	serv_addr.sin_family = AF_INET;//using IPv4 address
	serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1");//detail IP address
	serv_addr.sin_port = htons(1234);//port
	connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr));

	//read the data from server
	char buffer[40];
	read(sock, buffer, sizeof(buffer)-1);

	printf("Message from server: %s\n", buffer);

	//close socket
	close(sock);

	return 0;
}
