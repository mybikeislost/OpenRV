//*****************************************************************************
// Copyright (c) 2024 Autodesk, Inc.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//
//*****************************************************************************

// IMPORTANT: This file (not the template) is auto-generated by qt2mu.py script.
//            The prefered way to do a fix is to handrolled it or modify the
//            qt2mu.py script. If it is not possible, manual editing is ok but
//            it could be lost in future generations.

#include <MuQt6/qtUtils.h>
#include <MuQt6/QHostAddressType.h>
#include <MuQt6/QActionType.h>
#include <MuQt6/QWidgetType.h>
#include <Mu/Alias.h>
#include <Mu/BaseFunctions.h>
#include <Mu/ClassInstance.h>
#include <Mu/Exception.h>
#include <Mu/Function.h>
#include <Mu/MemberFunction.h>
#include <Mu/MemberVariable.h>
#include <Mu/Node.h>
#include <Mu/ParameterVariable.h>
#include <Mu/ReferenceType.h>
#include <Mu/SymbolicConstant.h>
#include <Mu/Thread.h>
#include <Mu/Value.h>
#include <MuLang/MuLangContext.h>
#include <MuLang/StringType.h>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtSvg/QtSvg>
#include <QSvgWidget>
#include <QtNetwork/QtNetwork>

namespace Mu
{
    using namespace std;

    QHostAddressType::Instance::Instance(const Class* c)
        : ClassInstance(c)
    {
    }

    QHostAddressType::QHostAddressType(Context* c, const char* name,
                                       Class* super)
        : Class(c, name, super)
    {
    }

    QHostAddressType::~QHostAddressType() {}

    static NODE_IMPLEMENTATION(__allocate, Pointer)
    {
        QHostAddressType::Instance* i =
            new QHostAddressType::Instance((Class*)NODE_THIS.type());
        QHostAddressType::registerFinalizer(i);
        NODE_RETURN(i);
    }

    void QHostAddressType::registerFinalizer(void* o)
    {
        GC_register_finalizer(o, QHostAddressType::finalizer, 0, 0, 0);
    }

    void QHostAddressType::finalizer(void* obj, void* data)
    {
        QHostAddressType::Instance* i =
            reinterpret_cast<QHostAddressType::Instance*>(obj);
        delete i;
    }

    //----------------------------------------------------------------------
    //  PRE-COMPILED FUNCTIONS

    Pointer qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        setqtype<QHostAddressType>(param_this, QHostAddress());
        return param_this;
    }

    Pointer qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_ip4Addr)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        quint32 arg1 = (int)(param_ip4Addr);
        setqtype<QHostAddressType>(param_this, QHostAddress(arg1));
        return param_this;
    }

    Pointer qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress_string(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_address)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        const QString arg1 = qstring(param_address);
        setqtype<QHostAddressType>(param_this, QHostAddress(arg1));
        return param_this;
    }

    void qt_QHostAddress_clear_void_QHostAddress(Mu::Thread& NODE_THREAD,
                                                 Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        arg0.clear();
        setqtype<QHostAddressType>(param_this, arg0);
    }

    bool qt_QHostAddress_isBroadcast_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isBroadcast();
    }

    bool qt_QHostAddress_isEqual_bool_QHostAddress_QHostAddress_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other,
        int param_mode)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        const QHostAddress arg1 = getqtype<QHostAddressType>(param_other);
        QHostAddress::ConversionMode arg2 =
            (QHostAddress::ConversionMode)(param_mode);
        return arg0.isEqual(arg1, arg2);
    }

    bool qt_QHostAddress_isGlobal_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                    Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isGlobal();
    }

    bool qt_QHostAddress_isInSubnet_bool_QHostAddress_QHostAddress_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_subnet,
        int param_netmask)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        const QHostAddress arg1 = getqtype<QHostAddressType>(param_subnet);
        int arg2 = (int)(param_netmask);
        return arg0.isInSubnet(arg1, arg2);
    }

    bool qt_QHostAddress_isLinkLocal_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isLinkLocal();
    }

    bool qt_QHostAddress_isLoopback_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                      Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isLoopback();
    }

    bool qt_QHostAddress_isMulticast_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isMulticast();
    }

    bool qt_QHostAddress_isNull_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isNull();
    }

    bool qt_QHostAddress_isSiteLocal_bool_QHostAddress(Mu::Thread& NODE_THREAD,
                                                       Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isSiteLocal();
    }

    bool qt_QHostAddress_isUniqueLocalUnicast_bool_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.isUniqueLocalUnicast();
    }

    int qt_QHostAddress_protocol_int_QHostAddress(Mu::Thread& NODE_THREAD,
                                                  Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return arg0.protocol();
    }

    Pointer qt_QHostAddress_scopeId_string_QHostAddress(Mu::Thread& NODE_THREAD,
                                                        Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return makestring(c, arg0.scopeId());
    }

    void qt_QHostAddress_setAddress_void_QHostAddress_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_ip4Addr)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        quint32 arg1 = (int)(param_ip4Addr);
        arg0.setAddress(arg1);
        setqtype<QHostAddressType>(param_this, arg0);
    }

    bool qt_QHostAddress_setAddress_bool_QHostAddress_string(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_address)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        const QString arg1 = qstring(param_address);
        return arg0.setAddress(arg1);
    }

    void qt_QHostAddress_setScopeId_void_QHostAddress_string(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_id)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        const QString arg1 = qstring(param_id);
        arg0.setScopeId(arg1);
        setqtype<QHostAddressType>(param_this, arg0);
    }

    void qt_QHostAddress_swap_void_QHostAddress_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        QHostAddress arg1 = getqtype<QHostAddressType>(param_other);
        arg0.swap(arg1);
        setqtype<QHostAddressType>(param_this, arg0);
    }

    Pointer
    qt_QHostAddress_toString_string_QHostAddress(Mu::Thread& NODE_THREAD,
                                                 Pointer param_this)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        return makestring(c, arg0.toString());
    }

    bool qt_QHostAddress_operatorBang_EQ__bool_QHostAddress_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        const QHostAddress arg1 = getqtype<QHostAddressType>(param_other);
        return arg0.operator!=(arg1);
    }

    bool qt_QHostAddress_operatorBang_EQ__bool_QHostAddress_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        QHostAddress::SpecialAddress arg1 =
            (QHostAddress::SpecialAddress)(param_other);
        return arg0.operator!=(arg1);
    }

    bool qt_QHostAddress_operatorEQ_EQ__bool_QHostAddress_QHostAddress(
        Mu::Thread& NODE_THREAD, Pointer param_this, Pointer param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        const QHostAddress arg1 = getqtype<QHostAddressType>(param_other);
        return arg0.operator==(arg1);
    }

    bool qt_QHostAddress_operatorEQ_EQ__bool_QHostAddress_int(
        Mu::Thread& NODE_THREAD, Pointer param_this, int param_other)
    {
        MuLangContext* c = static_cast<MuLangContext*>(NODE_THREAD.context());
        QHostAddress arg0 = getqtype<QHostAddressType>(param_this);
        QHostAddress::SpecialAddress arg1 =
            (QHostAddress::SpecialAddress)(param_other);
        return arg0.operator==(arg1);
    }

    static NODE_IMPLEMENTATION(_n_QHostAddress0, Pointer)
    {
        NODE_RETURN(qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_QHostAddress1, Pointer)
    {
        NODE_RETURN(qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_QHostAddress5, Pointer)
    {
        NODE_RETURN(
            qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress_string(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_clear0, void)
    {
        qt_QHostAddress_clear_void_QHostAddress(NODE_THREAD,
                                                NONNIL_NODE_ARG(0, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_isBroadcast0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isBroadcast_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isEqual0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isEqual_bool_QHostAddress_QHostAddress_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
            NODE_ARG(2, int)));
    }

    static NODE_IMPLEMENTATION(_n_isGlobal0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isGlobal_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isInSubnet0, bool)
    {
        NODE_RETURN(
            qt_QHostAddress_isInSubnet_bool_QHostAddress_QHostAddress_int(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer),
                NODE_ARG(2, int)));
    }

    static NODE_IMPLEMENTATION(_n_isLinkLocal0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isLinkLocal_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isLoopback0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isLoopback_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isMulticast0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isMulticast_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isNull0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isNull_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isSiteLocal0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isSiteLocal_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_isUniqueLocalUnicast0, bool)
    {
        NODE_RETURN(qt_QHostAddress_isUniqueLocalUnicast_bool_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_protocol0, int)
    {
        NODE_RETURN(qt_QHostAddress_protocol_int_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_scopeId0, Pointer)
    {
        NODE_RETURN(qt_QHostAddress_scopeId_string_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setAddress0, void)
    {
        qt_QHostAddress_setAddress_void_QHostAddress_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int));
    }

    static NODE_IMPLEMENTATION(_n_setAddress4, bool)
    {
        NODE_RETURN(qt_QHostAddress_setAddress_bool_QHostAddress_string(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_setScopeId0, void)
    {
        qt_QHostAddress_setScopeId_void_QHostAddress_string(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_swap0, void)
    {
        qt_QHostAddress_swap_void_QHostAddress_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, Pointer));
    }

    static NODE_IMPLEMENTATION(_n_toString0, Pointer)
    {
        NODE_RETURN(qt_QHostAddress_toString_string_QHostAddress(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorBang_EQ_0, bool)
    {
        NODE_RETURN(
            qt_QHostAddress_operatorBang_EQ__bool_QHostAddress_QHostAddress(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorBang_EQ_1, bool)
    {
        NODE_RETURN(qt_QHostAddress_operatorBang_EQ__bool_QHostAddress_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    static NODE_IMPLEMENTATION(_n_operatorEQ_EQ_0, bool)
    {
        NODE_RETURN(
            qt_QHostAddress_operatorEQ_EQ__bool_QHostAddress_QHostAddress(
                NODE_THREAD, NONNIL_NODE_ARG(0, Pointer),
                NODE_ARG(1, Pointer)));
    }

    static NODE_IMPLEMENTATION(_n_operatorEQ_EQ_1, bool)
    {
        NODE_RETURN(qt_QHostAddress_operatorEQ_EQ__bool_QHostAddress_int(
            NODE_THREAD, NONNIL_NODE_ARG(0, Pointer), NODE_ARG(1, int)));
    }

    void QHostAddressType::load()
    {
        USING_MU_FUNCTION_SYMBOLS;
        MuLangContext* c = static_cast<MuLangContext*>(context());
        Module* global = globalModule();

        const string typeName = name();
        const string refTypeName = typeName + "&";
        const string fullTypeName = fullyQualifiedName();
        const string fullRefTypeName = fullTypeName + "&";
        const char* tn = typeName.c_str();
        const char* ftn = fullTypeName.c_str();
        const char* rtn = refTypeName.c_str();
        const char* frtn = fullRefTypeName.c_str();

        scope()->addSymbols(new ReferenceType(c, rtn, this),

                            new Function(c, tn, BaseFunctions::dereference,
                                         Cast, Return, ftn, Args, frtn, End),

                            EndArguments);

        addSymbols(
            new Function(c, "__allocate", __allocate, None, Return, ftn, End),

            EndArguments);

        addSymbols(
            new Alias(c, "ConversionModeFlag", "int"),
            new Alias(c, "ConversionMode", "int"),
            new SymbolicConstant(c, "StrictConversion", "int",
                                 Value(int(QHostAddress::StrictConversion))),
            new SymbolicConstant(
                c, "ConvertV4MappedToIPv4", "int",
                Value(int(QHostAddress::ConvertV4MappedToIPv4))),
            new SymbolicConstant(
                c, "ConvertV4CompatToIPv4", "int",
                Value(int(QHostAddress::ConvertV4CompatToIPv4))),
            new SymbolicConstant(c, "ConvertLocalHost", "int",
                                 Value(int(QHostAddress::ConvertLocalHost))),
            new SymbolicConstant(
                c, "ConvertUnspecifiedAddress", "int",
                Value(int(QHostAddress::ConvertUnspecifiedAddress))),
            new SymbolicConstant(c, "TolerantConversion", "int",
                                 Value(int(QHostAddress::TolerantConversion))),
            new Alias(c, "SpecialAddress", "int"),
            new SymbolicConstant(c, "Null", "int",
                                 Value(int(QHostAddress::Null))),
            new SymbolicConstant(c, "LocalHost", "int",
                                 Value(int(QHostAddress::LocalHost))),
            new SymbolicConstant(c, "LocalHostIPv6", "int",
                                 Value(int(QHostAddress::LocalHostIPv6))),
            new SymbolicConstant(c, "Broadcast", "int",
                                 Value(int(QHostAddress::Broadcast))),
            new SymbolicConstant(c, "AnyIPv4", "int",
                                 Value(int(QHostAddress::AnyIPv4))),
            new SymbolicConstant(c, "AnyIPv6", "int",
                                 Value(int(QHostAddress::AnyIPv6))),
            new SymbolicConstant(c, "Any", "int",
                                 Value(int(QHostAddress::Any))),
            EndArguments);

        addSymbols(
            // enums
            // member functions
            new Function(c, "QHostAddress", _n_QHostAddress0, None, Compiled,
                         qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress,
                         Return, "qt.QHostAddress", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(
                c, "QHostAddress", _n_QHostAddress1, None, Compiled,
                qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress_int,
                Return, "qt.QHostAddress", Parameters,
                new Param(c, "this", "qt.QHostAddress"),
                new Param(c, "ip4Addr", "int"), End),
            // MISSING: QHostAddress (QHostAddress; QHostAddress this, "const
            // quint8 *" ip6Addr) MISSING: QHostAddress (QHostAddress;
            // QHostAddress this, "const Q_IPV6ADDR &" ip6Addr) MISSING:
            // QHostAddress (QHostAddress; QHostAddress this, "const sockaddr *"
            // sockaddr)
            new Function(
                c, "QHostAddress", _n_QHostAddress5, None, Compiled,
                qt_QHostAddress_QHostAddress_QHostAddress_QHostAddress_string,
                Return, "qt.QHostAddress", Parameters,
                new Param(c, "this", "qt.QHostAddress"),
                new Param(c, "address", "string"), End),
            // MISSING: QHostAddress (QHostAddress; QHostAddress this, flags
            // QHostAddress::SpecialAddress address) MISSING: QHostAddress
            // (QHostAddress; QHostAddress this, QHostAddress address)
            new Function(c, "clear", _n_clear0, None, Compiled,
                         qt_QHostAddress_clear_void_QHostAddress, Return,
                         "void", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "isBroadcast", _n_isBroadcast0, None, Compiled,
                         qt_QHostAddress_isBroadcast_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(
                c, "isEqual", _n_isEqual0, None, Compiled,
                qt_QHostAddress_isEqual_bool_QHostAddress_QHostAddress_int,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QHostAddress"),
                new Param(c, "other", "qt.QHostAddress"),
                new Param(c, "mode", "int",
                          Value((int)QHostAddress::TolerantConversion)),
                End),
            new Function(c, "isGlobal", _n_isGlobal0, None, Compiled,
                         qt_QHostAddress_isGlobal_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(
                c, "isInSubnet", _n_isInSubnet0, None, Compiled,
                qt_QHostAddress_isInSubnet_bool_QHostAddress_QHostAddress_int,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QHostAddress"),
                new Param(c, "subnet", "qt.QHostAddress"),
                new Param(c, "netmask", "int"), End),
            // MISSING: isInSubnet (bool; QHostAddress this, "const
            // QPair<QHostAddress, int> &" subnet)
            new Function(c, "isLinkLocal", _n_isLinkLocal0, None, Compiled,
                         qt_QHostAddress_isLinkLocal_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "isLoopback", _n_isLoopback0, None, Compiled,
                         qt_QHostAddress_isLoopback_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "isMulticast", _n_isMulticast0, None, Compiled,
                         qt_QHostAddress_isMulticast_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "isNull", _n_isNull0, None, Compiled,
                         qt_QHostAddress_isNull_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "isSiteLocal", _n_isSiteLocal0, None, Compiled,
                         qt_QHostAddress_isSiteLocal_bool_QHostAddress, Return,
                         "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "isUniqueLocalUnicast", _n_isUniqueLocalUnicast0,
                         None, Compiled,
                         qt_QHostAddress_isUniqueLocalUnicast_bool_QHostAddress,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "protocol", _n_protocol0, None, Compiled,
                         qt_QHostAddress_protocol_int_QHostAddress, Return,
                         "int", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "scopeId", _n_scopeId0, None, Compiled,
                         qt_QHostAddress_scopeId_string_QHostAddress, Return,
                         "string", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            new Function(c, "setAddress", _n_setAddress0, None, Compiled,
                         qt_QHostAddress_setAddress_void_QHostAddress_int,
                         Return, "void", Parameters,
                         new Param(c, "this", "qt.QHostAddress"),
                         new Param(c, "ip4Addr", "int"), End),
            // MISSING: setAddress (void; QHostAddress this, "const quint8 *"
            // ip6Addr) MISSING: setAddress (void; QHostAddress this, "const
            // Q_IPV6ADDR &" ip6Addr) MISSING: setAddress (void; QHostAddress
            // this, "const sockaddr *" sockaddr)
            new Function(c, "setAddress", _n_setAddress4, None, Compiled,
                         qt_QHostAddress_setAddress_bool_QHostAddress_string,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"),
                         new Param(c, "address", "string"), End),
            // MISSING: setAddress (void; QHostAddress this, flags
            // QHostAddress::SpecialAddress address)
            new Function(c, "setScopeId", _n_setScopeId0, None, Compiled,
                         qt_QHostAddress_setScopeId_void_QHostAddress_string,
                         Return, "void", Parameters,
                         new Param(c, "this", "qt.QHostAddress"),
                         new Param(c, "id", "string"), End),
            new Function(c, "swap", _n_swap0, None, Compiled,
                         qt_QHostAddress_swap_void_QHostAddress_QHostAddress,
                         Return, "void", Parameters,
                         new Param(c, "this", "qt.QHostAddress"),
                         new Param(c, "other", "qt.QHostAddress"), End),
            // MISSING: toIPv4Address (int; QHostAddress this, "bool *" ok)
            // MISSING: toIPv6Address ("Q_IPV6ADDR"; QHostAddress this)
            new Function(c, "toString", _n_toString0, None, Compiled,
                         qt_QHostAddress_toString_string_QHostAddress, Return,
                         "string", Parameters,
                         new Param(c, "this", "qt.QHostAddress"), End),
            // static functions
            // MISSING: parseSubnet ("QPair<QHostAddress, int>"; string subnet)
            EndArguments);
        globalScope()->addSymbols(
            new Function(
                c, "!=", _n_operatorBang_EQ_0, Op, Compiled,
                qt_QHostAddress_operatorBang_EQ__bool_QHostAddress_QHostAddress,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QHostAddress"),
                new Param(c, "other", "qt.QHostAddress"), End),
            new Function(c, "!=", _n_operatorBang_EQ_1, Op, Compiled,
                         qt_QHostAddress_operatorBang_EQ__bool_QHostAddress_int,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"),
                         new Param(c, "other", "int"), End),
            // MISSING: = (QHostAddress; QHostAddress this, QHostAddress
            // address) MISSING: = (QHostAddress; QHostAddress this, flags
            // QHostAddress::SpecialAddress address)
            new Function(
                c, "==", _n_operatorEQ_EQ_0, Op, Compiled,
                qt_QHostAddress_operatorEQ_EQ__bool_QHostAddress_QHostAddress,
                Return, "bool", Parameters,
                new Param(c, "this", "qt.QHostAddress"),
                new Param(c, "other", "qt.QHostAddress"), End),
            new Function(c, "==", _n_operatorEQ_EQ_1, Op, Compiled,
                         qt_QHostAddress_operatorEQ_EQ__bool_QHostAddress_int,
                         Return, "bool", Parameters,
                         new Param(c, "this", "qt.QHostAddress"),
                         new Param(c, "other", "int"), End),
            EndArguments);
        scope()->addSymbols(EndArguments);
    }

} // namespace Mu
