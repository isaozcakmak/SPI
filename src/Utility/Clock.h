#ifndef PANDA_UTILITY_CLOCK
#define PANDA_UTILITY_CLOCK

#include <string>

namespace Utility
{
	class Clock
	{
	public:
		Clock(int hour, int minute, int second);
		~Clock() {}

		static const Clock Now();
		static const Clock ProgramClock();

		const std::string toString() const;
		
		operator const std::string() const;

	private:
		int m_hour;
		int m_minute;
		int m_second;

	};
}

#endif // PANDA_UTILITY_CLOCK