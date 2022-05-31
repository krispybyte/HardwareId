#include <iostream>
#include "HardwareId/HardwareId.hpp"

/*
	Test to see if all the fetched
	of the information is valid.
*/

int main()
{
	// Cpu
	std::printf("[CPU] Name: %s\n", HardwareId::Cpu::Name().c_str());
	std::printf("[CPU] Id: %s\n", HardwareId::Cpu::Id().c_str());
	std::printf("[CPU] Cores: %i\n", HardwareId::Cpu::CoreCount());

	// Gpu
	std::printf("[GPU] Name: %s\n", HardwareId::Gpu::Name().c_str());

	// Ram
	std::printf("[RAM] Serial: %s\n", HardwareId::Ram::Serial().c_str());
	std::printf("[RAM] Manufacturer: %s\n", HardwareId::Ram::Manufacturer().c_str());

	// Disk
	std::printf("[DISK] Serial: %s", HardwareId::Disk::Serial().c_str());

	return std::getchar();
}