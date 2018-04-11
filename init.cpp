#include <interpreters/php_interpreter/init.h>

using namespace GROS;
using namespace common;
using namespace php_interpreter;
using namespace interpreters;
using namespace filesystem;



php::php(char* original_code, char* arguments, directory* serverdir){
  server_dir=serverdir;
  code=original_code;
  final_html=code;
  args=arguments;
}
php::~php(){

}

void php::interpret_sql(char* query, char* database){

}
void php::standard_lib(){

}
void php::includes(){
  for(int i=0; i<sizeof(code); i++){
    if(code[i:i+9]=="include '"){
      char* file_name=""
      int j=i+10;
      while(true){if(code[j]=='.'){break;}else{file_name+=code[j];}}
      char* file_data=controller::to_string(controller::read(false, server_dir, file_name, extension=="php"));
      final_html=file_data+final_html;
    }
  }
}

void php::for_loops(){

}
void php::while_loops(){

}

void php::functions(){

}

bool php::export_html(){

}
