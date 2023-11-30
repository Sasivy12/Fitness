#include "FitnessFrame.h"
#include "Course.h"
#include "Customer.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Customer^ customer = nullptr;

	while (true)
	{
		Fitness::FitnessFrame fitFrame;
		fitFrame.ShowDialog();

		if (fitFrame.switchToProf)
		{
			Fitness::Course courseFrame;
			courseFrame.ShowDialog();
			if (courseFrame.switchToReg)
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
}