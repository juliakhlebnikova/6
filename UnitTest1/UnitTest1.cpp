
#include "pch.h"
#include "CppUnitTest.h"
#include "../6ttt/6ttt.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			auto ans = F({ { 2, 3 }, {1,2} });
			vector<pair<int, int>> realAns = { {1, 2}, {2, 3} };
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i)
			{
				Assert::AreEqual(realAns[i].first, ans[i].first);
				Assert::AreEqual(realAns[i].second, ans[i].second);
			}
		}

		TEST_METHOD(TestMethod2)
		{
			auto ans = F({ { 1, 1 }, {1, 2}, {3, 5} });
			vector<pair<int, int>> realAns = { {1, 1}, {1, 2}, {3,5} };
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i)
			{
				Assert::AreEqual(realAns[i].first, ans[i].first);
				Assert::AreEqual(realAns[i].second, ans[i].second);
			}
		}

		TEST_METHOD(TestMethod3)
		{
			auto ans = F({});
			vector<pair<int, int>> realAns = {};
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i)
			{
				Assert::AreEqual(realAns[i].first, ans[i].first);
				Assert::AreEqual(realAns[i].second, ans[i].second);
			}
		}

		TEST_METHOD(TestMethod4)
		{
			auto ans = F({ { 1, 0 }, {-1, 0}, {0, 1} });
			vector<pair<int, int>> realAns = { {-1, 0}, {0, 1}, {1, 0} };
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i)
			{
				Assert::AreEqual(realAns[i].first, ans[i].first);
				Assert::AreEqual(realAns[i].second, ans[i].second);
			}
		}

		TEST_METHOD(TestMethod5)
		{
			auto ans = F({ { 8, 7 }, {1, 3}, {3, 5} });
			vector<pair<int, int>> realAns = { {1, 3}, {3, 5}, {8, 7} };
			Assert::AreEqual(realAns.size(), ans.size());
			for (int i = 0; i < realAns.size(); ++i)
			{
				Assert::AreEqual(realAns[i].first, ans[i].first);
				Assert::AreEqual(realAns[i].second, ans[i].second);
			}
		}
	};
}