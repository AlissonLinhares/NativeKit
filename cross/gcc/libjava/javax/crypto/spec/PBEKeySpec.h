
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_spec_PBEKeySpec__
#define __javax_crypto_spec_PBEKeySpec__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace crypto
    {
      namespace spec
      {
          class PBEKeySpec;
      }
    }
  }
}

class javax::crypto::spec::PBEKeySpec : public ::java::lang::Object
{

public:
  PBEKeySpec(JArray< jchar > *);
  PBEKeySpec(JArray< jchar > *, JArray< jbyte > *, jint);
  PBEKeySpec(JArray< jchar > *, JArray< jbyte > *, jint, jint);
  virtual void clearPassword();
  virtual jint getIterationCount();
  virtual jint getKeyLength();
  virtual JArray< jchar > * getPassword();
  virtual JArray< jbyte > * getSalt();
private:
  void setPassword(JArray< jchar > *);
  void setSalt(JArray< jbyte > *);
  void setIterationCount(jint);
  void setKeyLength(jint);
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) iterationCount;
  jint keyLength;
  JArray< jchar > * password;
  JArray< jbyte > * salt;
  jboolean passwordValid;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_crypto_spec_PBEKeySpec__
