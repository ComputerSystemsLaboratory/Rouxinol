#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <utility>

template <class Monoid, template <class> class Allocator = std::allocator,
	class Index = std::size_t>
	class PersistentSegmentTree {
	public:
		using value_type = Monoid;
		using reference = value_type &;
		using const_reference = const value_type &;
		using size_type = Index;

	private:
		using F = std::function<value_type(const_reference)>;
		struct node_type {
			using pointer = std::shared_ptr<const node_type>;
			const value_type value;
			const pointer left, right;
			template <class L, class R>
			node_type(L &&l, R &&r)
				: value(l->value + r->value), left(std::forward<L>(l)),
				right(std::forward<R>(r)) {}
			node_type(const value_type &v) : value(v), left(), right() {}
			node_type(value_type &&v) : value(std::move(v)), left(), right() {}
			node_type(pointer &&p)
				: value(value_type()), left(p), right(std::move(p)) {}
			value_type range(size_type first, size_type last, size_type l,
				size_type r) const {
				if (r <= first || last <= l)
					return value_type();
				if (first <= l && r <= last)
					return value;
				return left->range(first, last, l, (l + r) >> 1) +
					right->range(first, last, (l + r) >> 1, r);
			}
			pointer update(size_type index, size_type height, const F &f) const {
				if (!~height)
					return std::allocate_shared<const node_type>(alc, f(value));
				if (index >> height & 1)
					return std::allocate_shared<const node_type>(
						alc, left, right->update(index, height - 1, f));
				else
					return std::allocate_shared<const node_type>(
						alc, left->update(index, height - 1, f), right);
			}
		};

	public:
		using allocator_type = Allocator<node_type>;
		using pointer = std::shared_ptr<const node_type>;

	private:
		size_type height_;
		pointer root_;
		static allocator_type alc;
		static size_type getheight(size_type size) {
			return size ? getheight(size >> 1) + 1 : 0;
		}
		static pointer build(size_type height) {
			if (!height)
				return std::allocate_shared<const node_type>(alc, value_type());
			return std::allocate_shared<const node_type>(alc, build(height - 1));
		}
		explicit PersistentSegmentTree(pointer &&root, size_type height)
			: height_(height), root_(std::move(root)) {}

	public:
		PersistentSegmentTree() : height_(0), root_() {}
		explicit PersistentSegmentTree(size_type size)
			: height_(size ? getheight(size - 1) : 0), root_(build(height_)) {}

		static void set_allocator(const allocator_type &x) { alc = x; }
		static void set_allocator(allocator_type &&x) { alc = std::move(x); }

		value_type range(size_type first, size_type last) const {
			return root_->range(first, last, 0, static_cast<size_type>(1) << height_);
		}

		PersistentSegmentTree update(size_type index, const F &f) const {
			return PersistentSegmentTree(root_->update(index, height_ - 1, f), height_);
		}
		PersistentSegmentTree update(size_type index, const value_type &data) const {
			return PersistentSegmentTree(
				root_->update(index, height_ - 1,
					[&data](const_reference v) { return data; }),
				height_);
		}
};
template <class Monoid, template <class> class Allocator, class Index>
typename PersistentSegmentTree<Monoid, Allocator, Index>::allocator_type
PersistentSegmentTree<Monoid, Allocator, Index>::alc = {};
#include<iostream>

int main() {
	int n, q;
	std::cin >> n >> q;
	PersistentSegmentTree<int> T(n);
	while (q--) {
		int c, x, y;
		std::cin >> c >> x >> y;
		if (c)
			std::cout << T.range(x - 1, y) << std::endl;
		else
			T = T.update(x - 1, [y](int t) { return t + y;});
	}
	return 0;
}
