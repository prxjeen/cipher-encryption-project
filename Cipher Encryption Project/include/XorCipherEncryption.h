#pragma once
#include "CipherEncryption.h"

class XorCipherEncryption : public CipherEncryption
{
	char key;
	std::string *processText(std::string *);
  public:
	XorCipherEncryption(char &);
	std::string getEncryptionKey() override;
	std::string *encrypt(std::string *) override;
	std::string *decrypt(std::string *) override;
};