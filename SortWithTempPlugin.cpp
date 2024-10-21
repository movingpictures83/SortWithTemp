#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SortWithTempPlugin.h"

void SortWithTempPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void SortWithTempPlugin::run() {}

void SortWithTempPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "sort -T";
myCommand += " " + PluginManager::addPrefix(myParameters["tempfolder"]);
myCommand += " " + PluginManager::addPrefix(myParameters["fastafile"]);
myCommand += " > " + outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<SortWithTempPlugin> SortWithTempPluginProxy = PluginProxy<SortWithTempPlugin>("SortWithTemp", PluginManager::getInstance());
