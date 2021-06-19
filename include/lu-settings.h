#ifndef LU_SETTINGS_H
#define LU_SETTINGS_H


typedef struct {
  char    *_matrix;
} Task;

typedef struct {
  int  *_verbose;
} Env;

typedef struct {
  char    *apiVersion;
  Env     _env;
  Task    _task;
} Settings;


int parse();
int parse2();


#endif /* LU_SETTINGS_H */

