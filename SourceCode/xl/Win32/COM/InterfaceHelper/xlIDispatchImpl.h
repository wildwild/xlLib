//--------------------------------------------------------------------
//
//    Copyright (C) Streamlet. All rights reserved.
//
//    File Name:   xlIDispatchImpl.h
//    Author:      Streamlet
//    Create Time: 2012-09-01
//    Description: 
//
//    Version history:
//
//
//--------------------------------------------------------------------

#ifndef __XLIDISPATCHIMPL_H_7A443B6E_EA9F_486C_B4D3_771DB7560CF8_INCLUDED__
#define __XLIDISPATCHIMPL_H_7A443B6E_EA9F_486C_B4D3_771DB7560CF8_INCLUDED__


#include <oaidl.h>
#include <xl/Win32/COM/xlComDef.h>
#include <xl/Win32/COM/InterfaceHelper/xlIUnknownImpl.h>

namespace xl
{
    template <typename T = IDispatch>
    class IDispatchImpl : public IUnknownImpl<T>
    {
    public:
        XL_COM_INTERFACE_BEGIN()
            XL_COM_INTERFACE(IDispatch)
            XL_COM_INTERFACE_CHAIN(IUnknownImpl<T>)
        XL_COM_INTERFACE_END()

    public: // IDispatch Methods
        STDMETHOD(GetTypeInfoCount)(UINT *pctinfo)
        {
            return E_NOTIMPL;
        }

        STDMETHOD(GetTypeInfo)(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo)
        {
            return E_NOTIMPL;
        }

        STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId)
        {
            return E_NOTIMPL;
        }

        STDMETHOD(Invoke)(DISPID dispIdMember,
                          REFIID riid,
                          LCID lcid,
                          WORD wFlags,
                          DISPPARAMS *pDispParams,
                          VARIANT *pVarResult,
                          EXCEPINFO *pExcepInfo,
                          UINT *puArgErr)
        {
            return E_NOTIMPL;
        }

    };

} // namespace xl


#endif // #ifndef __XLIDISPATCHIMPL_H_7A443B6E_EA9F_486C_B4D3_771DB7560CF8_INCLUDED__