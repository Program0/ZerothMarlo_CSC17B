#ifndef MAILCLIENT_H
#define MAILCLIENT_H

#include <QMainWindow>
#include <QIcon>
#include <QSplitter>
#include <QTextEdit>
#include <QTreeWidget>
#include <QMenuBar>
#include <QStatusBar>
#include <QCloseEvent>
#include <QSettings>

class MailClient : public QMainWindow
{
    Q_OBJECT

public:
    MailClient();

protected:
    void closeEvent(QCloseEvent *event);

private:
    void addFolder(const QIcon &icon, const QString &name);
    void addMessage(const QString &subject, const QString &from,
                    const QString &date);
    void readSettings();
    void writeSettings();

    QSplitter *mainSplitter;
    QSplitter *rightSplitter;
    QTreeWidget *foldersTreeWidget;
    QTreeWidget *messagesTreeWidget;
    QTextEdit *textEdit;
};

#endif
