#ifndef WLED_WEBSOCKET_H
#define WLED_WEBSOCKET_H

#include <AsyncWebSocket.h>

#define WS_LIVE_INTERVAL 40

void handleWs();
void wsEvent(AsyncWebSocket * server, AsyncWebSocketClient * client, AwsEventType type, void * arg, uint8_t *data, size_t len);
void sendDataWs(AsyncWebSocketClient * client = nullptr);

#endif // WLED_WEBSOCKET_S

