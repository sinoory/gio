
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "google/protobuf/io/zero_copy_stream.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/io/coded_stream.h"
#include "protocol/sync.pb.h"
#include <iostream>
using namespace std;
using namespace google::protobuf::io;
using namespace sync_pb;
int main(){

    int fd = open("myfile", O_WRONLY);
    cout<<"open fd="<<fd<<endl;
    //google::protobuf::io::ZeroCopyOutputStream* raw_output = 0 ; // new FileOutputStream(fd);
    //ZeroCopyOutputStream* raw_output = 0 ; // new FileOutputStream(fd);
    ZeroCopyOutputStream* raw_output =  new FileOutputStream(fd);
    CodedOutputStream* coded_output = new CodedOutputStream(raw_output);
    //google::protobuf::io::FileOutputStream* p=0;
    //google::protobuf::io::MyTest* p=0;
    int magic_number = 1234;
    char text[] = "Hello world!";
    coded_output->WriteLittleEndian32(magic_number);
    coded_output->WriteVarint32(strlen(text));
    coded_output->WriteRaw(text, strlen(text));
    delete coded_output;
    delete raw_output;
    close(fd);


    ClientToServerResponse * pcsr=0;
    ClientToServerResponse  csr;
    ClientToServerResponse  csr2;

    return 0;
}
