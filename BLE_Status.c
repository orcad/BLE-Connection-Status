
/**
 * \ BLE Interface
 * \ Status Message
 * \ By Engineer: Firas Faham
 * This API is used to handle incoming status messages.
 * It prints all status messages, If DISCONNECT or STREAM_OPEN is received it manages
 * the state of bool connected.
 *
 * \param message Passed status message
 * \return Nothing
 */
      // File: BLE_Interface.c



#include <stdio.h>
#include <stdlib.h>

char *BLE_msg = "DISCONNECT";
char connected = 'N';
char *message ;

char BLE_MessageHandler(char* );

int main()
{
    printf("Check BLE connection\n\n");

        message = "DISCONNECT";       // Will print > Not connected
//      message = "STREAM_OPEN";      // Will print > Connected

    connected = BLE_MessageHandler(message);

     if (connected == 'Y') printf("Connected...\n");
     if (connected == 'N') printf("Not Connected...\n");

    return 0;
}





char BLE_MessageHandler(char* message)
{

    if (strstr(message, "DISCONNECT"))
    {
        return (char)('N');
    }
    else if (strstr(message, "STREAM_OPEN"))
    {
        return (char)('Y');
    }
    else
    {
        // Place your message here, such as for ERROR
    }
}
