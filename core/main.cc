
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "google/protobuf/io/zero_copy_stream.h"

int main(){
    int fd = open("myfile", O_WRONLY);
    ZeroCopyOutputStream* raw_output = new FileOutputStream(fd);
    return 0;
}
