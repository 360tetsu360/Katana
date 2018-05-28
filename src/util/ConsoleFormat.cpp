#include "util/ConsoleFormat.h"

#ifdef WIN32
const std::string ConsoleFormat::Black = "";
const std::string ConsoleFormat::DarkBlue = "";
const std::string ConsoleFormat::DarkGreen = "";
const std::string ConsoleFormat::DarkAqua = "";
const std::string ConsoleFormat::DarkRed = "";
const std::string ConsoleFormat::Purple = "";
const std::string ConsoleFormat::Gold = "";
const std::string ConsoleFormat::Gray = "";
const std::string ConsoleFormat::DarkGray = "";
const std::string ConsoleFormat::Blue = "";
const std::string ConsoleFormat::Green = "";
const std::string ConsoleFormat::Aqua = "";
const std::string ConsoleFormat::Red = "";
const std::string ConsoleFormat::LightPurple = "";
const std::string ConsoleFormat::Yellow = "";
const std::string ConsoleFormat::White = "";

const std::string ConsoleFormat::Bold = "";
const std::string ConsoleFormat::Obfuscated = "";
const std::string ConsoleFormat::Italic = "";
const std::string ConsoleFormat::Underline = "";
const std::string ConsoleFormat::Strikethrough = "";
const std::string ConsoleFormat::Reset = "";
#else
const std::string ConsoleFormat::Black = "\x1b[38;5;16m";
const std::string ConsoleFormat::DarkBlue = "\x1b[38;5;19m";
const std::string ConsoleFormat::DarkGreen = "\x1b[38;5;34m";
const std::string ConsoleFormat::DarkAqua = "\x1b[38;5;37m";
const std::string ConsoleFormat::DarkRed = "\x1b[38;5;124m";
const std::string ConsoleFormat::Purple = "\x1b[38;5;127m";
const std::string ConsoleFormat::Gold = "\x1b[38;5;214m";
const std::string ConsoleFormat::Gray = "\x1b[38;5;145m";
const std::string ConsoleFormat::DarkGray = "\x1b[38;5;59m";
const std::string ConsoleFormat::Blue = "\x1b[38;5;63m";
const std::string ConsoleFormat::Green = "\x1b[38;5;83m";
const std::string ConsoleFormat::Aqua = "\x1b[38;5;87m";
const std::string ConsoleFormat::Red = "\x1b[38;5;203m";
const std::string ConsoleFormat::LightPurple = "\x1b[38;5;207m";
const std::string ConsoleFormat::Yellow = "\x1b[38;5;227m";
const std::string ConsoleFormat::White = "\x1b[38;5;231m";

const std::string ConsoleFormat::Bold = "\x1b[1m";
const std::string ConsoleFormat::Obfuscated = "";
const std::string ConsoleFormat::Italic = "\x1b[3m";
const std::string ConsoleFormat::Underline = "\x1b[4m";
const std::string ConsoleFormat::Strikethrough = "\x1b[9m";
const std::string ConsoleFormat::Reset = "\x1b[m";
#endif