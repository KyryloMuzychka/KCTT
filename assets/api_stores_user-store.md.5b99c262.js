import{_ as e,c as t,o as a,O as i}from"./chunks/framework.3ec6c483.js";const _=JSON.parse('{"title":"UserStore class","description":"","frontmatter":{},"headers":[],"relativePath":"api/stores/user-store.md"}'),r={name:"api/stores/user-store.md"},s=i('<h1 id="userstore-class" tabindex="-1">UserStore class <a class="header-anchor" href="#userstore-class" aria-label="Permalink to &quot;UserStore class&quot;">​</a></h1><h2 id="userstore" tabindex="-1">UserStore() <a class="header-anchor" href="#userstore" aria-label="Permalink to &quot;UserStore()&quot;">​</a></h2><p>Конструктор класса UserStore для определение хранилища пользователей.</p><h2 id="public-api" tabindex="-1">Public API <a class="header-anchor" href="#public-api" aria-label="Permalink to &quot;Public API&quot;">​</a></h2><h3 id="int-getsize" tabindex="-1">int GetSize() <a class="header-anchor" href="#int-getsize" aria-label="Permalink to &quot;int GetSize()&quot;">​</a></h3><p>Функция для получение количества пользователей.</p><h3 id="void-add-user-user" tabindex="-1">void Add(User *user) <a class="header-anchor" href="#void-add-user-user" aria-label="Permalink to &quot;void Add(User \\*user)&quot;">​</a></h3><p>Функция для добавление ссылки на экземпляр класса User в хранилище.</p><h3 id="void-delete-size-t-index" tabindex="-1">void Delete(size_t index) <a class="header-anchor" href="#void-delete-size-t-index" aria-label="Permalink to &quot;void Delete(size_t index)&quot;">​</a></h3><p>Функция для удаления ссылки по индексу в векторе.</p><h3 id="void-deleteall" tabindex="-1">void DeleteAll() <a class="header-anchor" href="#void-deleteall" aria-label="Permalink to &quot;void DeleteAll()&quot;">​</a></h3><p>Функция для отчистки хранилища.</p><h3 id="void-deleteallcustomers" tabindex="-1">void DeleteAllCustomers() <a class="header-anchor" href="#void-deleteallcustomers" aria-label="Permalink to &quot;void DeleteAllCustomers()&quot;">​</a></h3><p>Функция для удаления всех пользователей с ролью &quot;Customer&quot;.</p><h3 id="void-deletebyid-std-string-id" tabindex="-1">void DeleteById(std::string id) <a class="header-anchor" href="#void-deletebyid-std-string-id" aria-label="Permalink to &quot;void DeleteById(std::string id)&quot;">​</a></h3><p>Функция для удаления пользователя по уникальному номеру.</p><h3 id="bool-existsbyid-std-string-id" tabindex="-1">bool ExistsById(std::string id) <a class="header-anchor" href="#bool-existsbyid-std-string-id" aria-label="Permalink to &quot;bool ExistsById(std::string id)&quot;">​</a></h3><p>Функция для проверки существование пользователя по уникальному номеру.</p><h3 id="user-get-size-t-index" tabindex="-1">User *Get(size_t index) <a class="header-anchor" href="#user-get-size-t-index" aria-label="Permalink to &quot;User \\*Get(size_t index)&quot;">​</a></h3><p>Функция для получении ссылки на экземпляр класса User по индексу хранилища.</p><h3 id="user-findbyid-std-string-id" tabindex="-1">User *FindById(std::string id); <a class="header-anchor" href="#user-findbyid-std-string-id" aria-label="Permalink to &quot;User \\*FindById(std::string id);&quot;">​</a></h3><p>Функция для получении ссылки на экземпляр класса User по уникальному номеру.</p><h3 id="user-findbylogin-std-string-login" tabindex="-1">User *FindByLogin(std::string login) <a class="header-anchor" href="#user-findbylogin-std-string-login" aria-label="Permalink to &quot;User \\*FindByLogin(std::string login)&quot;">​</a></h3><p>Функция для получении ссылки на экземпляр класса User по логину.</p><h2 id="private-api" tabindex="-1">Private API <a class="header-anchor" href="#private-api" aria-label="Permalink to &quot;Private API&quot;">​</a></h2><ul><li><code>std::vector&lt;User *&gt;</code> users - хранилище всех пользователей системы.</li></ul>',26),d=[s];function o(l,n,h,u,c,b){return a(),t("div",null,d)}const g=e(r,[["render",o]]);export{_ as __pageData,g as default};
