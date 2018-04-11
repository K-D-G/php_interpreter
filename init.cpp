#include <interpreters/php_interpreter/init.h>

using namespace GROS;
using namespace common;
using namespace php_interpreter;
using namespace interpreters;
using namespace filesystem;



php::php(char* original_code, char* arguments, directory* serverdir){
  server_dir=serverdir;
  code=original_code;
  final_html="";
  args=arguments;
}
php::~php(){

}

void php::interpret_sql(char* query, char* database){

}
char* php::standard_lib(){

}
char* php::includes(){

}

char* php::for_loops(){

}
char* php::while_loops(){

}

bool php::export_html(){

}
