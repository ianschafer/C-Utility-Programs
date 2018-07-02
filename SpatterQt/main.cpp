/*
Program name: Spatter
Version: 0.0
Author: Ian A Schafer
Date: 01-July-2018
Description: Program to begin using Qt threads QThreads.
There are four threading ways in QT; QThread, QThreadPool, QRunnable and Concurrent.

This program is built using the first type - QThread. It does not appear to start a new
thread, but enables you to run the code in the instance of class threadType, called slaveThread,
in the main thread.

A computer is a state machine. Threads are for people who can't program state machines.
— Alan Cox

*/
#include <QCoreApplication>
#include <QThreadPool>
#include <QThread>
#include <iostream>

using namespace std;

bool bDoSomethingNowSlave(false);

class threadType : public QThread {
protected:
 void run() {

     while(1)
     {
         if(bDoSomethingNowSlave)
         {
             cout << "-------> I'm kicking inside the new thread boss! "
                   << "currentThread running? " << QThread::currentThread()->isRunning() << "Id: " << QThread::currentThread() << " <-------" << endl;
             bDoSomethingNowSlave = false;
         }
     }
 }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

   cout << "CurrentThread .. " << QThread::currentThread() << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;

    //Create Slave class
    threadType *slaveThread;
    slaveThread = new threadType;
    slaveThread->start();

    cout << "CurrentThread .. " << slaveThread->thread() << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;

    //Master Thread
    int Count = 1;

    while(1)
    {
        if(Count % 5 == 0)
        {
            cout << endl;
            cout << "What's my slave doing .." << endl;
            bDoSomethingNowSlave = true;

//            cout << "slaveThread running: " << slaveThread->isRunning() << " Id: " << slaveThread->currentThread() << endl;
//            cout << "currentThread running: " << QThread::currentThread()->isRunning() << " Id: " << QThread::currentThread() << endl;
            cout << endl;

            slaveThread->sleep(3);
        }

        cout << "Master Gathering Information .. Count " << Count << endl;

        slaveThread->msleep(300);
        Count++;

    }

        slaveThread->wait();

        return a.exec();
}

