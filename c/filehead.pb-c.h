/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: filehead.proto */

#ifndef PROTOBUF_C_filehead_2eproto__INCLUDED
#define PROTOBUF_C_filehead_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _FileInfo FileInfo;


/* --- enums --- */


/* --- messages --- */

struct  _FileInfo
{
  ProtobufCMessage base;
  char *name;
  uint32_t size;
  ProtobufCBinaryData info;
};
#define FILE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&file_info__descriptor) \
    , NULL, 0, {0,NULL} }


/* FileInfo methods */
void   file_info__init
                     (FileInfo         *message);
size_t file_info__get_packed_size
                     (const FileInfo   *message);
size_t file_info__pack
                     (const FileInfo   *message,
                      uint8_t             *out);
size_t file_info__pack_to_buffer
                     (const FileInfo   *message,
                      ProtobufCBuffer     *buffer);
FileInfo *
       file_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   file_info__free_unpacked
                     (FileInfo *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*FileInfo_Closure)
                 (const FileInfo *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor file_info__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_filehead_2eproto__INCLUDED */