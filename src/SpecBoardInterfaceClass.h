/*----- PROTECTED REGION ID(SpecBoardInterfaceClass.h) ENABLED START -----*/
//=============================================================================
//
// file :        SpecBoardInterfaceClass.h
//
// description : Include for the SpecBoardInterface root class.
//               This class is the singleton class for
//                the SpecBoardInterface device class.
//               It contains all properties and methods which the 
//               SpecBoardInterface requires only once e.g. the commands.
//
// project :     Simple PCI FMC Carrier (SPEC) Tango DS interface
//
// This file is part of Tango device class.
// 
// Tango is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Tango is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Tango.  If not, see <http://www.gnu.org/licenses/>.
// 
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// $HeadURL:  $
//
//=============================================================================
//                This file is generated by POGO
//        (Program Obviously used to Generate tango Object)
//=============================================================================


#ifndef SpecBoardInterfaceClass_H
#define SpecBoardInterfaceClass_H

#include <tango.h>
#include <SpecBoardInterface.h>


/*----- PROTECTED REGION END -----*/	//	SpecBoardInterfaceClass.h


namespace SpecBoardInterface_ns
{
/*----- PROTECTED REGION ID(SpecBoardInterfaceClass::classes for dynamic creation) ENABLED START -----*/


/*----- PROTECTED REGION END -----*/	//	SpecBoardInterfaceClass::classes for dynamic creation

//=========================================
//	Define classes for attributes
//=========================================
//	Attribute barArea class definition
class barAreaAttrib: public Tango::Attr
{
public:
	barAreaAttrib():Attr("barArea",
			Tango::DEV_SHORT, Tango::READ_WRITE) {};
	~barAreaAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_barArea(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->write_barArea(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_barArea_allowed(ty);}
};

//	Attribute bitfile class definition
class bitfileAttrib: public Tango::Attr
{
public:
	bitfileAttrib():Attr("bitfile",
			Tango::DEV_STRING, Tango::READ_WRITE) {};
	~bitfileAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_bitfile(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->write_bitfile(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_bitfile_allowed(ty);}
};

//	Attribute readAddress class definition
class readAddressAttrib: public Tango::Attr
{
public:
	readAddressAttrib():Attr("readAddress",
			Tango::DEV_ULONG, Tango::READ_WRITE) {};
	~readAddressAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_readAddress(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->write_readAddress(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_readAddress_allowed(ty);}
};

//	Attribute writeAddress class definition
class writeAddressAttrib: public Tango::Attr
{
public:
	writeAddressAttrib():Attr("writeAddress",
			Tango::DEV_ULONG, Tango::READ_WRITE) {};
	~writeAddressAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_writeAddress(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->write_writeAddress(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_writeAddress_allowed(ty);}
};

//	Attribute readValue class definition
class readValueAttrib: public Tango::Attr
{
public:
	readValueAttrib():Attr("readValue",
			Tango::DEV_ULONG, Tango::READ) {};
	~readValueAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_readValue(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_readValue_allowed(ty);}
};

//	Attribute writeValue class definition
class writeValueAttrib: public Tango::Attr
{
public:
	writeValueAttrib():Attr("writeValue",
			Tango::DEV_ULONG, Tango::WRITE) {};
	~writeValueAttrib() {};
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->write_writeValue(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_writeValue_allowed(ty);}
};

//	Attribute sizeReadBlock class definition
class sizeReadBlockAttrib: public Tango::Attr
{
public:
	sizeReadBlockAttrib():Attr("sizeReadBlock",
			Tango::DEV_ULONG, Tango::READ_WRITE) {};
	~sizeReadBlockAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_sizeReadBlock(att);}
	virtual void write(Tango::DeviceImpl *dev,Tango::WAttribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->write_sizeReadBlock(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_sizeReadBlock_allowed(ty);}
};

//	Attribute readRegisterBlock class definition
class readRegisterBlockAttrib: public Tango::SpectrumAttr
{
public:
	readRegisterBlockAttrib():SpectrumAttr("readRegisterBlock",
			Tango::DEV_ULONG, Tango::READ, 65536) {};
	~readRegisterBlockAttrib() {};
	virtual void read(Tango::DeviceImpl *dev,Tango::Attribute &att)
		{(static_cast<SpecBoardInterface *>(dev))->read_readRegisterBlock(att);}
	virtual bool is_allowed(Tango::DeviceImpl *dev,Tango::AttReqType ty)
		{return (static_cast<SpecBoardInterface *>(dev))->is_readRegisterBlock_allowed(ty);}
};


//=========================================
//	Define classes for commands
//=========================================
//	Command ReadRegister class definition
class ReadRegisterClass : public Tango::Command
{
public:
	ReadRegisterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ReadRegisterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ReadRegisterClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<SpecBoardInterface *>(dev))->is_ReadRegister_allowed(any);}
};

//	Command ReadRegisterBlock class definition
class ReadRegisterBlockClass : public Tango::Command
{
public:
	ReadRegisterBlockClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	ReadRegisterBlockClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~ReadRegisterBlockClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<SpecBoardInterface *>(dev))->is_ReadRegisterBlock_allowed(any);}
};

//	Command WriteRegister class definition
class WriteRegisterClass : public Tango::Command
{
public:
	WriteRegisterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	WriteRegisterClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~WriteRegisterClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<SpecBoardInterface *>(dev))->is_WriteRegister_allowed(any);}
};

//	Command LoadBitstream class definition
class LoadBitstreamClass : public Tango::Command
{
public:
	LoadBitstreamClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out,
				   const char        *in_desc,
				   const char        *out_desc,
				   Tango::DispLevel  level)
	:Command(name,in,out,in_desc,out_desc, level)	{};

	LoadBitstreamClass(const char   *name,
	               Tango::CmdArgType in,
				   Tango::CmdArgType out)
	:Command(name,in,out)	{};
	~LoadBitstreamClass() {};
	
	virtual CORBA::Any *execute (Tango::DeviceImpl *dev, const CORBA::Any &any);
	virtual bool is_allowed (Tango::DeviceImpl *dev, const CORBA::Any &any)
	{return (static_cast<SpecBoardInterface *>(dev))->is_LoadBitstream_allowed(any);}
};


/**
 *	The SpecBoardInterfaceClass singleton definition
 */

#ifdef _TG_WINDOWS_
class __declspec(dllexport)  SpecBoardInterfaceClass : public Tango::DeviceClass
#else
class SpecBoardInterfaceClass : public Tango::DeviceClass
#endif
{
	/*----- PROTECTED REGION ID(SpecBoardInterfaceClass::Additionnal DServer data members) ENABLED START -----*/
	
	
	/*----- PROTECTED REGION END -----*/	//	SpecBoardInterfaceClass::Additionnal DServer data members

	public:
		//	write class properties data members
		Tango::DbData	cl_prop;
		Tango::DbData	cl_def_prop;
		Tango::DbData	dev_def_prop;
	
		//	Method prototypes
		static SpecBoardInterfaceClass *init(const char *);
		static SpecBoardInterfaceClass *instance();
		~SpecBoardInterfaceClass();
		Tango::DbDatum	get_class_property(string &);
		Tango::DbDatum	get_default_device_property(string &);
		Tango::DbDatum	get_default_class_property(string &);
	
	protected:
		SpecBoardInterfaceClass(string &);
		static SpecBoardInterfaceClass *_instance;
		void command_factory();
		void attribute_factory(vector<Tango::Attr *> &);
		void write_class_property();
		void set_default_property();
		void get_class_property();
		string get_cvstag();
		string get_cvsroot();
	
	private:
		void device_factory(const Tango::DevVarStringArray *);
		void create_static_attribute_list(vector<Tango::Attr *> &);
		void erase_dynamic_attributes(const Tango::DevVarStringArray *,vector<Tango::Attr *> &);
		vector<string>	defaultAttList;
		Tango::Attr *get_attr_object_by_name(vector<Tango::Attr *> &att_list, string attname);
};

}	//	End of namespace

#endif   //	SpecBoardInterface_H