/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.plugin.MMPluginProviderConstants
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLUGIN_MMPLUGINPROVIDERCONSTANTS_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_PLUGIN_MMPLUGINPROVIDERCONSTANTS_HPP_DECL


namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace provider { class BaseColumns; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentValues.hpp>
#include <android/net/Uri.hpp>
#include <android/provider/BaseColumns.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace plugin {

	class MMPluginProviderConstants;
	namespace MMPluginProviderConstants_ {

		class OAuth;
		class OAuth
			: public object<OAuth>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			explicit OAuth(jobject jobj)
			: object<OAuth>(jobj)
			{
			}

			operator local_ref<android::provider::BaseColumns>() const;
			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > CONTENT_URI;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > API_KEY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > REQUEST_TOKEN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > ACCESS_TOKEN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > SECRET;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > ACTION_REQUEST_TOKEN;
		}; //class OAuth

		class PluginDB;
		class PluginDB
			: public object<PluginDB>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit PluginDB(jobject jobj)
			: object<PluginDB>(jobj)
			{
			}

			operator local_ref<android::provider::BaseColumns>() const;
			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > CONTENT_URI;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > KEY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > VALUE;
		}; //class PluginDB

		class PluginIntent;
		class PluginIntent
			: public object<PluginIntent>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)
			J2CPP_DECLARE_FIELD(9)
			J2CPP_DECLARE_FIELD(10)

			explicit PluginIntent(jobject jobj)
			: object<PluginIntent>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			PluginIntent();

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > AUTH_KEY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > NAME;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > PACKAGE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > REQUEST_TOKEN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > ACCESS_TOKEN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > PERMISSIONS;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > ACTION_REQUEST_TOKEN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_RESPONSE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > ACTION_QRCODE_SCANNED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > PLUGIN_PACKAGE_PATTERN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > APP_PACKAGE_PATTERN;
		}; //class PluginIntent

		class Resolver;
		class Resolver
			: public object<Resolver>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit Resolver(jobject jobj)
			: object<Resolver>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			static jint getType(local_ref< java::lang::Object >  const&);
			static jboolean unresolveObj(local_ref< android::content::ContentValues >  const&, local_ref< java::lang::Object >  const&);
			static local_ref< java::lang::Object > resolveObj(jint, local_ref< java::lang::String >  const&);
		}; //class Resolver

		class SharedPref;
		class SharedPref
			: public object<SharedPref>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit SharedPref(jobject jobj)
			: object<SharedPref>(jobj)
			{
			}

			operator local_ref<android::provider::BaseColumns>() const;
			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > CONTENT_URI;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > KEY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > VALUE;
		}; //class SharedPref

	} //namespace MMPluginProviderConstants_

	class MMPluginProviderConstants
		: public object<MMPluginProviderConstants>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		typedef MMPluginProviderConstants_::OAuth OAuth;
		typedef MMPluginProviderConstants_::PluginDB PluginDB;
		typedef MMPluginProviderConstants_::PluginIntent PluginIntent;
		typedef MMPluginProviderConstants_::Resolver Resolver;
		typedef MMPluginProviderConstants_::SharedPref SharedPref;

		explicit MMPluginProviderConstants(jobject jobj)
		: object<MMPluginProviderConstants>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		MMPluginProviderConstants();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > AUTHORITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > TYPE_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > TYPE_INT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > TYPE_LONG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > TYPE_STRING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > TYPE_BOOLEAN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > TYPE_FLOAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > TYPE_DOUBLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > PLUGIN_PACKAGE_PATTERN;
	}; //class MMPluginProviderConstants

} //namespace plugin
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLUGIN_MMPLUGINPROVIDERCONSTANTS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_PLUGIN_MMPLUGINPROVIDERCONSTANTS_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_PLUGIN_MMPLUGINPROVIDERCONSTANTS_HPP_IMPL

namespace j2cpp {




com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}

com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::Uri >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::CONTENT_URI;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::API_KEY;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::REQUEST_TOKEN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::ACCESS_TOKEN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_NAME(4),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::SECRET;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_NAME(5),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth::ACTION_REQUEST_TOKEN;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,"com/tencent/mm/sdk/plugin/MMPluginProviderConstants$OAuth")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,0,"CONTENT_URI","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,1,"API_KEY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,2,"REQUEST_TOKEN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,3,"ACCESS_TOKEN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,4,"SECRET","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::OAuth,5,"ACTION_REQUEST_TOKEN","Ljava/lang/String;")


com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}

com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::Uri >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::CONTENT_URI;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::KEY;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::TYPE;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB::VALUE;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,"com/tencent/mm/sdk/plugin/MMPluginProviderConstants$PluginDB")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,0,"CONTENT_URI","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,1,"KEY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,2,"TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginDB,3,"VALUE","Ljava/lang/String;")


com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::PluginIntent()
: object<com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent>(
	call_new_object<
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::AUTH_KEY;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::NAME;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::PACKAGE;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::REQUEST_TOKEN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(4),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::ACCESS_TOKEN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(5),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::PERMISSIONS;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(6),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::ACTION_REQUEST_TOKEN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(7),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::ACTION_RESPONSE;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(8),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::ACTION_QRCODE_SCANNED;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(9),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::PLUGIN_PACKAGE_PATTERN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_NAME(10),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent::APP_PACKAGE_PATTERN;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,"com/tencent/mm/sdk/plugin/MMPluginProviderConstants$PluginIntent")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,0,"<init>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,0,"AUTH_KEY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,1,"NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,2,"PACKAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,3,"REQUEST_TOKEN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,4,"ACCESS_TOKEN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,5,"PERMISSIONS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,6,"ACTION_REQUEST_TOKEN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,7,"ACTION_RESPONSE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,8,"ACTION_QRCODE_SCANNED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,9,"PLUGIN_PACKAGE_PATTERN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::PluginIntent,10,"APP_PACKAGE_PATTERN","Ljava/lang/String;")


com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::getType(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(a0);
}

jboolean com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::unresolveObj(local_ref< android::content::ContentValues > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(a0, a1);
}

local_ref< java::lang::Object > com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::resolveObj(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Object >
	>(a0, a1);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver,"com/tencent/mm/sdk/plugin/MMPluginProviderConstants$Resolver")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver,1,"getType","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver,2,"unresolveObj","(Landroid/content/ContentValues;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::Resolver,3,"resolveObj","(ILjava/lang/String;)Ljava/lang/Object;")


com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}

com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::Uri >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::CONTENT_URI;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::KEY;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::TYPE;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref::VALUE;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,"com/tencent/mm/sdk/plugin/MMPluginProviderConstants$SharedPref")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,0,"CONTENT_URI","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,1,"KEY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,2,"TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants_::SharedPref,3,"VALUE","Ljava/lang/String;")



com::tencent::mm::sdk::plugin::MMPluginProviderConstants::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


com::tencent::mm::sdk::plugin::MMPluginProviderConstants::MMPluginProviderConstants()
: object<com::tencent::mm::sdk::plugin::MMPluginProviderConstants>(
	call_new_object<
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(0),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::AUTHORITY;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(1),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(1),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_UNKNOWN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(2),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(2),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_INT;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(3),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(3),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_LONG;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(4),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(4),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_STRING;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(5),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(5),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_BOOLEAN;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(6),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(6),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_FLOAT;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(7),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(7),
	jint
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::TYPE_DOUBLE;

static_field<
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_CLASS_NAME,
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_NAME(8),
	com::tencent::mm::sdk::plugin::MMPluginProviderConstants::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> com::tencent::mm::sdk::plugin::MMPluginProviderConstants::PLUGIN_PACKAGE_PATTERN;


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,"com/tencent/mm/sdk/plugin/MMPluginProviderConstants")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,0,"<init>","()V")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,0,"AUTHORITY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,1,"TYPE_UNKNOWN","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,2,"TYPE_INT","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,3,"TYPE_LONG","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,4,"TYPE_STRING","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,5,"TYPE_BOOLEAN","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,6,"TYPE_FLOAT","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,7,"TYPE_DOUBLE","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::plugin::MMPluginProviderConstants,8,"PLUGIN_PACKAGE_PATTERN","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_PLUGIN_MMPLUGINPROVIDERCONSTANTS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION