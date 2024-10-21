#ifndef SORTWITHTEMPPLUGIN_H
#define SORTWITHTEMPPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class SortWithTempPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "SortWithTemp";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
