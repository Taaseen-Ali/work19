#include "pipe_networking.h"


int main() {

  int to_client;
  int from_client;

  while(1){
  from_client = server_handshake( &to_client );
  char string[BUFFER_SIZE];
  
  while(!read(from_client, string, BUFFER_SIZE)){
    printf("[SERVER] Message received: %s\n", string);
    write(to_client, string, BUFFER_SIZE);
  }
  }
}
