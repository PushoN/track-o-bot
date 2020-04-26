#define DEFINE_SINGLETON(CLASSNAME) \
public: \
  static CLASSNAME* Instance( void ) { \
    static Guard g; \
    if( !_singletonptr ) \
      _singletonptr = new CLASSNAME(); \
    return _singletonptr; \
  } \
private: \
  static CLASSNAME* _singletonptr; \
  CLASSNAME( void ); \
  CLASSNAME( const CLASSNAME& ); \
  ~CLASSNAME( void ); \
  class Guard \
  { \
  public: \
    ~Guard() { \
      if( CLASSNAME::_singletonptr != NULL ) { \
        delete CLASSNAME::_singletonptr; \
        CLASSNAME::_singletonptr = NULL; \
      } \
    } \
  }; \
  friend class Guard;

#define DEFINE_SINGLETON_SCOPE( CLASSNAME ) \
  CLASSNAME* CLASSNAME::_singletonptr = NULL;

#include "Logger.h"

#define LOG(str, ...) Logger::Instance()->Add(LOG_INFO, str, ##__VA_ARGS__)
#define ERR(str, ...) Logger::Instance()->Add(LOG_ERROR, str, ##__VA_ARGS__)
#define DBG(str, ...) Logger::Instance()->Add(LOG_DEBUG, str, ##__VA_ARGS__)
  
#define VERSION "0.9.0"
#ifdef Q_OS_MAC
#define PLATFORM "macOS"
#else
#define PLATFORM "win32"
#endif

#include "Metadata.h"
#define METADATA(key, fmt, ...) Metadata::Instance()->Add(key, fmt, ##__VA_ARGS__)

#define UNUSED_ARG(x) (void)(x)

const char *qt2cstr( const QString& str );
