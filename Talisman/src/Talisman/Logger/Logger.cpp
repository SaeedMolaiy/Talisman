#include "Logger.h"

namespace Talisman
{
	Logger::Logger()
	{
		SetLoggerLevelToDefault();
	}

	void Logger::SetLoggerLevelToDefault()
	{
		loggerLevel = LoggerLevel::Debug;
	}

	void Logger::SetLoggerLevel(const LoggerLevel& newLoggerLevel)
	{
		loggerLevel = newLoggerLevel;
	}

	Logger::~Logger()
	{
	}
}