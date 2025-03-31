#pragma once

#include "../Base.h"

#include "LoggerLevel.h"

namespace Talisman
{
	class TLM_API Logger
	{

	private:
		LoggerLevel loggerLevel;

	public:
		Logger();

	public:
		void SetLoggerLevelToDefault();
		void SetLoggerLevel(const LoggerLevel& newLoggerLevel);

	public:
		~Logger();

	};
}