#pragma once
/*
	vc 2008 stl for edr driver frame work
	 by 
		mwpcheung@gmail.com
	��ԭʼ�ļ����˴����޸ģ��޸ĵĵط���
	1. c++ throw ֱ�ӱ���������д����ʱ�����С��
	2. c++ try catach ��û�ܺõ�ʵ�֣�����ֱ�ӷ����� ��д������Ҫע��
	3. cstdlib ������c����ʱ����ֱ�Ӷ���.
	4. ��������ʱû������
	5. stl Ĭ�ϵ�string ���ù�ϵ�ر��ӣ�û����stringģ�飬�������丸��basic_string<T>, ûʵ��compare����
		����std::map��ʱ��string������Ϊkeyʹ��
	6. vc2008 stl vector����û��ʵ����ȿ�������������vector��Ԫ����vector ��push һ��vectorʱ�����ᱻ��ȿ���������һ��vc��bug
	7. list �ݲ����ڸ����⡣
*/


#if (_DEBUG | NODEBUG)
#else
#if (_MSC_VER < 1600 )  // vc2010 ��ǰ
#define dllimport
#include "vcstl/sal.h"
#include "vcstl/xstring"
#include "vcstl/vector"
#include "vcstl/list"
#include "vcstl/map"
#include "stdint.h"
#else
#include "vcstl/xstring"
#include "vcstl/vector"
#include "vcstl/list"
#include "vcstl/map"
#include "stdint.h"
#endif
#endif
