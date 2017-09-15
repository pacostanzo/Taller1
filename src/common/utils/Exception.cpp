/*
 * Exception.cpp
 *
 *  Created on: 27/08/2016
 *      Author: pablo
 */

#include "Exception.h"

namespace exceptions {

Exception::Exception() {
	this->reason = "Excepcion Desconocida.";
}

Exception::Exception(const std::string& reason) {
	this->reason = reason;
}

Exception::~Exception() throw() {
	// TODO Auto-generated destructor stub
}

const char* Exception::what() const throw() {
    std::string exception = this->className() + this->getReason();
	return exception.c_str();
}

const std::string Exception::className() const {
	std::string className("[Exception]-- ");
	return className;
}

const std::string& Exception::getReason() const{
	return reason;
}

//Excepcion Socket
SocketException::SocketException():Exception() {
}

SocketException::SocketException(const std::string& reason):Exception(reason) {
}

SocketException::~SocketException() throw() {
	// TODO Auto-generated destructor stub
}

const std::string SocketException::className() const {
	std::string className("[SocketException]-- ");
	return className;
}

//Excepcion Threads
ThreadException::ThreadException():Exception() {
}

ThreadException::ThreadException(const std::string& reason):Exception(reason) {
}

ThreadException::~ThreadException() throw() {
	// TODO Auto-generated destructor stub
}

const std::string ThreadException::className() const {
	std::string className("[ThreadException]-- ");
	return className;
}

} /* namespace exceptions */
