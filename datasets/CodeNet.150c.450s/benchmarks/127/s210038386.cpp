/*
 * Copyright (c) 2006 Kamo Hiroyasu
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 *  An answer to ACM/ICPC Domestic Contest 2006 Problem B
 *	Organaize Your Train part II
 *
 *  Author: Kamo Hiroyasu <wd@ics.nara-wu.ac.jp>
 */

#include <iostream>
#include <string>
#include <set>

using namespace std;

int
count_configuration(const string &s)
{
	set<string>	ss;
	ss.insert(s);
	string		r(s.rbegin(), s.rend());
	ss.insert(r);
	for (string::size_type i = 1, l = s.length(); i < l; ++ i) {
		string	s0(s, 0, i);
		string	s1(s, i);
		string	r0(s0.rbegin(), s0.rend());
		string	r1(s1.rbegin(), s1.rend());
		ss.insert(s0 + r1);
		ss.insert(r0 + s1);
		ss.insert(r0 + r1);
		ss.insert(s1 + s0);
		ss.insert(s1 + r0);
		ss.insert(r1 + s0);
	}
	return ss.size();
}

int
main()
{
	int	n;
	string	str;
	for (cin >> n; n > 0 && cin >> str; n --) {
		cout << count_configuration(str) << endl;
	}
	return 0;
}

