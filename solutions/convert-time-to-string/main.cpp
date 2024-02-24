#include <string>

std::string convertTime(int timeDiff)
{
    int totalSeconds = timeDiff;
    int totalMinutes = timeDiff / 60;
    int totalHours   = timeDiff / 3600;
    int totalDays    = timeDiff / 86400;
  
    int days    = totalDays;
    int hours   = totalHours - (totalDays * 24);
    int minutes = totalMinutes - (totalHours * 60);
    int seconds = totalSeconds - (totalMinutes * 60);
  
    return std::to_string(days) + " " + std::to_string(hours) + " " + std::to_string(minutes) + " " + std::to_string(seconds);
}