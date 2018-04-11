#ifndef __GROS__INTERPRETERS__PHP_INTERPRETER__DATABASING_H
#define __GROS__INTERPRETERS__PHP_INTERPRETER__DATABASING_H
#include <common/types.h>
#include <filesystem/GRFS.h>

namespace GROS{
  namespace common{
    class database{
    protected:
      directory* server_dir;
    public:
      database(directory* serverdir);
      ~database();

      char* get_database(char* name);
      char* query(char* query);

    };
  }
}




#endif
