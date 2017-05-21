// Example long list to check mp_unique
template<int N, typename T> struct mp_long_list_impl
{
  using type = mp_push_front<typename mp_long_list_impl<N-1, T>::type, T>;
};

template<typename T> struct mp_long_list_impl<1, T>
{
  using type = std::tuple<T>;
};

template<int N, typename T> using mp_long_list = typename mp_long_list_impl<N, T>::type; 
