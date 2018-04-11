#ifndef __GROS__INTERPRETERS__PHP_INTERPRETER__INIT_H
#define __GROS__INTERPRETERS__PHP_INTERPRETER__INIT_H
#include <common/types.h>
#include <filesystem/GRFS.h>
#include <interpreters/php_interpreter/databasing.h>

namespace GROS{
  namespace common{
    class php{
    protected:
      directory* server_dir;
      char* final_html="";
    public:
      php(char* code, char* args, directory* serverdir);
      ~php();

      void interpret_sql(char* query, char* database);
      char* standard_lib(char* code);
      char* includes(char* code);

      char* for_loops(char* code);
      char* while_loops(char* code);

      bool export_html();

    };
  }
}






#endif
