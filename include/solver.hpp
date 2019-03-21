#include <vector>
#include <string>

std::tuple<std::vector<std::tuple<std::string, std::string, std::string>>,
           std::vector<std::tuple<std::string, std::string>>>
solve(std::vector<std::pair<std::string, std::string>> repos,
           std::string installed,
           std::vector<std::string> jobs,
           bool strict_priority);