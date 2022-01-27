#ifndef WEBCLIENT_H
#define WEBCLIENT_H

#include "ui_webclient.h"
#include <QAbstractSocket>
#include <QTcpSocket>

class Webclient : public QWidget, private Ui::Webclient
{
    Q_OBJECT

public:
    explicit Webclient(QWidget *parent = nullptr);
private:
    QString m_hostname;
    unsigned short m_port = 80;
    QTcpSocket *m_socket;
    void connected();
    void readyRead();
private slots:
    void on__go_clicked();

};

#endif // WEBCLIENT_H
