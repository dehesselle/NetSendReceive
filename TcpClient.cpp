#include "TcpClient.h"

TcpClient::TcpClient(QObject *parent) :
    TcpConnection(parent)
{

}

/*
bool TcpClient::connectTo(const QString &host, const quint16 &port)
{
    if (! m_connection)
    {
        m_connection = new Connection(this);
        m_connection->connectTo(host, port);
    }

    return m_connection->isValid();
}


void TcpClient::sendMessage(const QString &message)
{
    m_connection->sendMessage(message);
}
*/
