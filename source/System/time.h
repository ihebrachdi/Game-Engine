#pragma once

#include<glfw3.h>

namespace imatics {
	class Time {
	public:		
		bool m_alarmbusy = false;
	private:
		double m_holdtime;
	public:
		Time();
		bool Alarm(double timeins);
	};
}

