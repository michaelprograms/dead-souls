#ifndef __CLIENT_H__
#define __CLIENT_H__

int eventCreateSocket(string host, int port);
protected void eventAbortCallback(int fd);
nosave void eventReadCallback(int fd, mixed val);
protected void eventRead(mixed val);
protected void eventWriteCallback(int fd);
void eventWrite(mixed val);
protected void eventClose(class client sock);
protected void eventSocketClose();
int eventDestruct();
nosave void eventSocketError(string str, int x);
function SetRead(function f);
int SetSocketType(int x);
int SetDestructOnClose(int x);

#endif /* __CLIENT_H__ */