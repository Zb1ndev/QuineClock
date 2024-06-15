#include <iostream>
#include <vector>
#include <string>

using namespace std;

const string DIR = "/home/zbinden/Coding/QuineClock/";
vector<string> commands;

void RunCMDs(bool _run) {

  string _buildCMD = "";
  size_t _cmdCount = commands.size();
  for (size_t c = 0; c < _cmdCount; c++) {
    _buildCMD += commands[c];
  }

  system(_buildCMD.c_str()); // Build Command
  if (_run) system((DIR + "build/quineclock").c_str()); // Run Command

}

void AddCMD(string _cmd) {
  commands.push_back((_cmd + (char)(0x20)));
}

void AddCMD(string _flag, string _args) {
  string _cmd = _flag + (char)(0x20) + _args + (char)(0x20);
  commands.push_back(_cmd);
}

int main() {

  AddCMD("gcc");
  AddCMD("-o", DIR + "build/quineclock");

  AddCMD(DIR + "src/main.c");
  
  AddCMD("-include", "time.h");
  AddCMD("-include", "string.h");
  AddCMD("-include", "stdio.h");

  RunCMDs(true);

}