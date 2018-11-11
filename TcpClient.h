/* https://github.com/dehesselle/NetSendReceive
 */

#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include "TcpConnection.h"

class TcpClient : public TcpConnection
{
    Q_OBJECT
public:
    TcpClient(QObject *parent = nullptr);
/*
    bool connectTo(const QString &host, const quint16 &port);

    void sendMessage(const QString &message);

private:
    Connection* m_connection = nullptr;

    */
};

#endif // TCPCLIENT_H
