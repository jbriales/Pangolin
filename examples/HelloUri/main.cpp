#include <iostream>
#include <pangolin/utils/uri.h>

using namespace pangolin;

int main( int /*argc*/, char** /*argv*/ )
{
  const std::string str_uri = "huber:[a=0.1,b=3.3]//";
  Uri uri = ParseUri(str_uri);

  std::cout << uri;
  return 0;
}
