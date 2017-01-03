#pragma once

#include "Task.h"
#include <thread>


class MyThreadPool;
class Task;
class MyThread
{
	friend bool operator==(MyThread my1, MyThread my2);
	friend bool operator!=(MyThread my1, MyThread my2);
public:
	MyThread(MyThreadPool *pool);
	void Assign(Task *Task);
	void Run();
	void StartThread();
	int getthreadid();
	void setisdetach(bool isdetach);	
private:
	MyThreadPool *mythreadpool_;
	static int  s_threadnumber;
	bool isdetach_;
	Task *task_;
	int threadid_;
	std::thread thread_;
};




