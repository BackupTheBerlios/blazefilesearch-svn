#pragma once

using namespace System::Runtime::InteropServices;

namespace Blaze
{
	namespace Engine
	{
		public __gc class EngineInterface
		{

		public:
			EngineInterface()
			{
			}

			[DllImport("BlazeEngine.dll")]
			static void SayHi(String *txt, String *title);
		};
	}
}