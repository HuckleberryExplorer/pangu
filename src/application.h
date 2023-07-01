#ifndef APPLICATION_H_
#define APPLICATION_H_

#include <boost/asio.hpp>
#include <boost/noncopyable.hpp>

namespace pangu {

class Application : public boost::noncopyable {
public:
  static Application* Instance();

  Application();
  ~Application();

  bool Start();
  void Stop();

private:
  bool Initialize();
  void Finalize();
  void Run();
  bool Continue();
  bool Check();

private:
  boost::asio::thread_pool m_thread_pool;
};

}  // namespace pangu

#endif  // APPLICATION_H_
