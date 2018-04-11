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
      char* final_html;
      char* code;
      char* args;
    public:
      php(char* original_code, char* arguments, directory* serverdir);
      ~php();

      void interpret_sql(char* query, char* database);
      char* standard_lib();
      char* includes();

      char* for_loops();
      char* while_loops();

      bool export_html();

    };
  }
}






#endif
