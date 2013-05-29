#ifndef UTILS_CONV_HPP__
#define UTILS_CONV_HPP__

#include <string>

namespace gogo {
    
    typedef enum { 
        CONV_UTF8,
        CONV_CP1251
    } conv_enc_t;


    extern const char *g_enc_names[];

    bool conv_str(conv_enc_t from, conv_enc_t to, 
                  const char *in,
                  std::string *out,
                  size_t in_len /* = size_t(-1) */);

    
    static inline 
    bool conv_str(conv_enc_t from, conv_enc_t to, 
                  std::string in,
                  std::string *out)
    {
        conv_str(from, to, in.c_str(), out, in.length());
    }
}

#endif /* UTILS_CONV_HPP__ */
