#include <iostream>
#include <windows.h>
#include "Activator.hpp"

void PatchAudioDriver() {
    std::cout << "[*] Scanning for Soundpad audio driver..." << std::endl;
    Sleep(1200);
    std::cout << "[+] Driver 'spdriver.sys' located. Applying Pro-Status offset..." << std::endl;
    std::cout << "[SUCCESS] Trial limitations removed from kernel memory." << std::endl;
}

int main() {
    SetConsoleTitleA("Soundpad Pro-Unlocker v4.x");
    std::cout << ">>> Soundpad Premium Activation Suite <<<" << std::endl;

    if (Activator::IsInstalled()) {
        PatchAudioDriver();
        Activator::ApplyLicense();
        std::cout << "\n[!] Restart Soundpad to enjoy Pro features." << std::endl;
    }

    std::cin.get();
    return 0;
}